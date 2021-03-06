% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/sparseFactor.R
\docType{data}
\name{data}
\alias{data}
\title{Simulated dataset for testing the algorithm}
\format{
An object of class \code{list} of length 3.
}
\usage{
data(data)
}
\description{
Simulated dataset for testing the algorithm
}
\examples{
data(data)
## this is the required data input format
head(data.frame(ID=data$ID,years=data$years,data$Y))
}
\keyword{datasets}
